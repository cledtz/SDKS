#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptionalLabel : uint8
{
	Label_DS                       = 0,
	Label_NM                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct StoreSelectionUI.ItemData
struct FItemData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AC8[0x8];                                     // Fixing Size Of Struct
};

}


