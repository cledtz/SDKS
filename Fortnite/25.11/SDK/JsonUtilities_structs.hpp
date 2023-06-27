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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct JsonUtilities.JsonObjectWrapper
struct FJsonObjectWrapper
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174C[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
