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

// 0x13 (0x13 - 0x0)
// UserDefinedStruct GrindRail_Booster_Directional.GrindRail_Booster_Directional
struct FGrindRail_Booster_Directional
{
public:
	double                                       LocationOnRailinTiles_21_4C298D7E43D6D531E9294D9EBF6D35AF; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LengthinTiles_22_72B92E3B4647946BC77E16B7C38E3157; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlipLocation_24_A14D038B4CE3B99F148CE080581B9B64;  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGleefulRake_BoosterMode          PositiveMode_18_F5DE4E09428A0EE407A054BBEDC68176;  // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGleefulRake_BoosterMode          NegativeMode_20_6D6ECC5845390875BEC167B11090B704;  // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
