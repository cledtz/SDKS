#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAI_navigation_result : uint8
{
	Reached                        = 0,
	PartiallyReached               = 1,
	Interrupted                    = 2,
	Blocked                        = 3,
	Unreachable                    = 4,
	AI_navigation_MAX              = 5,
};

enum class ETeams_team_attitude : uint8
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	Teams_team_MAX                 = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// VerseStruct VerseFortnite.AI_fort_threat_info
struct FAI_fort_threat_info
{
public:
	FOptionalProperty_                           __verse_0x8B9AF22A_Instigator;                     // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB1B721CE_Source;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x4A328DE2_LastKnownPosition;              // 0x10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        __verse_0xAC2B8860_HasLineOfSight : 1;             // Mask: 0x1, PropSize: 0x10x28(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_247 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        __verse_0xABBA0802_IsThreatening : 1;              // Mask: 0x1, PropSize: 0x10x29(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D1D[0xE];                                     // Fixing Size Of Struct
};

// 0x3 (0x3 - 0x0)
// VerseStruct VerseFortnite.Characters_stasis_args
struct FCharacters_stasis_args
{
public:
	uint8                                        __verse_0xADC8E6AA_AllowTurning : 1;               // Mask: 0x1, PropSize: 0x10x0(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_248 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        __verse_0x04C721DA_AllowFalling : 1;               // Mask: 0x1, PropSize: 0x10x1(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_249 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        __verse_0x178F77CA_AllowEmotes : 1;                // Mask: 0x1, PropSize: 0x10x2(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortnite.Game_damage_args
struct FGame_damage_args
{
public:
	FOptionalProperty_                           __verse_0x8B9AF22A_Instigator;                     // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB1B721CE_Source;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	double                                       __verse_0x193A13B7_Amount;                         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseFortnite.Game_damage_result
struct FGame_damage_result
{
public:
	class UObject*                               __verse_0x459049A1_Target;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x193A13B7_Amount;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0x8B9AF22A_Instigator;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB1B721CE_Source;                         // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortnite.Game_elimination_result
struct FGame_elimination_result
{
public:
	class UObject*                               __verse_0xC5F618E8_EliminatedCharacter;            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0x9B605FD1_EliminatingCharacter;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortnite.Game_healing_args
struct FGame_healing_args
{
public:
	FOptionalProperty_                           __verse_0x8B9AF22A_Instigator;                     // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB1B721CE_Source;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	double                                       __verse_0x193A13B7_Amount;                         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseFortnite.Game_healing_result
struct FGame_healing_result
{
public:
	class UObject*                               __verse_0x459049A1_Target;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x193A13B7_Amount;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0x8B9AF22A_Instigator;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB1B721CE_Source;                         // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct VerseFortnite.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortnite.tuple_Lagent_Magent_R
struct FTuple_Lagent_Magent_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortnite.tuple_Lagent_Mfloat_Mfloat_R
struct FTuple_Lagent_Mfloat_Mfloat_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortnite.tuple_Lagent_Mteam_R
struct FTuple_Lagent_Mteam_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_team*                      __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseFortnite.tuple_Lagent_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VerseFortnite.tuple_Lvector3_Mrotation_R
struct FTuple_Lvector3_Mrotation_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D2F[0x8];                                     // Fixing Size After Last Property 
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// VerseStruct VerseFortnite.tuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
struct FTuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3D31[0x7];                                     // Fixing Size After Last Property 
	struct FTuple_Lvector3_Mrotation_R           __verse_0x932BF92E_Elem2;                          // 0x10(0x40)(InstancedReference, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseFortnite.tuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseFortnite.tuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// VerseStruct VerseFortnite.tuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
{
public:
	class UAI_navigation_target*                 __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0x932BF92E_Elem2;                          // 0x18(0x2)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortnite.tuple_Lplayer_Mtuple_L_R_Mplayer_R
struct FTuple_Lplayer_Mtuple_L_R_Mplayer_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3D34[0x7];                                     // Fixing Size After Last Property 
	class USimulation_player*                    __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseFortnite.tuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortnite.tuple_Lteam_Mteam_R
struct FTuple_Lteam_Mteam_R
{
public:
	class USimulation_team*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_team*                      __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VerseFortnite.tuple_Lvector3_Mfloat_Mfloat_R
struct FTuple_Lvector3_Mfloat_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


