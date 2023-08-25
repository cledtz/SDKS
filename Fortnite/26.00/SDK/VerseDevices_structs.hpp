#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// ScriptStruct VerseDevices.PlaylistOptionScriptValue
struct FPlaylistOptionScriptValue : public FPlaylistOptionValue
{
public:
	TSubclassOf<class UVerseCreativeDevice>      Value;                                             // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct VerseDevices.VerseDeviceFunctionPayload
struct FVerseDeviceFunctionPayload
{
public:
	class UController*                           Instigator;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


