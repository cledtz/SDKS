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

enum class ELinkCodeUserInputError : uint8
{
	InvalidMnemonicCharacter       = 0,
	InvalidMnemonicLength          = 1,
	InvalidVersionFormat           = 2,
	NoError                        = 3,
	ELinkCodeUserInputError_MAX    = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct LinkId.OnlineLinkId
struct FOnlineLinkId
{
public:
	class FString                                Mnemonic;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Version;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4678[0x4];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
