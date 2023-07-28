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

enum class EGame_Abilities_activate_ability_result : uint8
{
	Activated                      = 0,
	Canceled                       = 1,
	Completed                      = 2,
	Failed                         = 3,
	NotOwned                       = 4,
	Invalid                        = 5,
	Game_Abilities_activate_ability_MAX = 6,
};

enum class EGame_Abilities_add_ability_result : uint8
{
	Added                          = 0,
	AlreadyOwned                   = 1,
	Invalid                        = 2,
	Game_Abilities_add_ability_MAX = 3,
};

enum class EGame_Abilities_remove_ability_result : uint8
{
	NotOwned                       = 0,
	Removed                        = 1,
	Invalid                        = 2,
	Game_Abilities_remove_ability_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteGameplayAbilities.tuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
{
public:
	class UGame_Abilities_gameplay_ability_asset* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteGameplayAbilities.tuple_Lgameplay__effect__asset_Mfloat_R
struct FTuple_Lgameplay__effect__asset_Mfloat_R
{
public:
	class UGame_Abilities_gameplay_effect_asset* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
