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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct CharacterPartMidArrayStruct.CharacterPartMidArrayStruct
struct FCharacterPartMidArrayStruct
{
public:
	enum class EFortCustomPartType               PartType_5_EBDFFF5740627902CC51DD966B8EE419;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CEB[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInstanceDynamic*>      MID_7_A0D19AC74319389A5DF2019166F976F0;            // 0x8(0x10)(Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
