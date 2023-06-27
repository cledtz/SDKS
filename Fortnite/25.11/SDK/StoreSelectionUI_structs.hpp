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

enum class EOptionalLabel : uint8
{
	Label_DS                       = 0,
	Label_NM                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct StoreSelectionUI.ItemData
struct FItemData
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D1A[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
