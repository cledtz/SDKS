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

// 0x8 (0x10 - 0x8)
// ScriptStruct VictoryCrownsRuntime.VictoryCrownPlaylistData
struct FVictoryCrownPlaylistData : public FTableRowBase
{
public:
	int32                                        MaxRankingForCrownAward;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85BA[0x4];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
