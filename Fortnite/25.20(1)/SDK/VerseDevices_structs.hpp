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

// 0x8 (0xB0 - 0xA8)
// ScriptStruct VerseDevices.PlaylistOptionScriptValue
struct FPlaylistOptionScriptValue : public FPlaylistOptionValue
{
public:
	TSubclassOf<class UVerseCreativeDevice>      Value;                                             // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct VerseDevices.VerseDeviceFunctionPayload
struct FVerseDeviceFunctionPayload
{
public:
	class UController*                           Instigator;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
