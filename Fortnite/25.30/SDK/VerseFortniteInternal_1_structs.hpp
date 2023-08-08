#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGame_Player_player_status_type : uint8
{
	OnGround                       = 0,
	Skydiving                      = 1,
	UsingGlider                    = 2,
	InVehicle                      = 3,
	Shooting                       = 4,
	AimingDownSights               = 5,
	InStasis                       = 6,
	Game_Player_player_status_MAX  = 7,
};

enum class EGame_Player_PlayerAttribute : uint8
{
	CurrentHealth                  = 0,
	CurrentShield                  = 1,
	InitialHealth                  = 2,
	InitialShield                  = 3,
	Damage                         = 4,
	ShieldDamage                   = 5,
	Game_Player_MAX                = 6,
};

enum class EGame_Player_PlayerAttributeOperation : uint8
{
	Add                            = 0,
	Multiply                       = 1,
	Divide                         = 2,
	Override                       = 3,
	SetMax                         = 4,
	SetMin                         = 5,
	Game_Player_MAX                = 6,
};

enum class EGame_PlayerSettingState : uint8
{
	PlayerDefault                  = 0,
	PlayerAllow                    = 1,
	PlayerDisallow                 = 2,
	Game_MAX                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// VerseStruct VerseFortniteInternal.Game_Player_player_team
struct FGame_Player_player_team
{
public:
	uint8                                        Pad_686D[0x4];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lcomponent_M_K_Kchar_R
struct FTuple_Lcomponent_M_K_Kchar_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<FVerseStringProperty_>                __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lcomponent_Mcomponent_R
struct FTuple_Lcomponent_Mcomponent_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R
struct FTuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_fort_item_definition*            __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xF64C4596_Elem3;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lcomponent_Mlogic_R
struct FTuple_Lcomponent_Mlogic_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x7D844C3C_Elem1 : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lint_Mint_R
struct FTuple_Lint_Mint_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Litem__type_Mint_Mplayer__component_R
struct FTuple_Litem__type_Mint_Mplayer__component_R
{
public:
	class UGame_Item_item_type*                  __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_player_component*          __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer__component_Mplayer__start__component_R
struct FTuple_Lplayer__component_Mplayer__start__component_R
{
public:
	class USimulation_player_component*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_Player_player_start_component*   __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer__component_Mplayer__status__type_R
struct FTuple_Lplayer__component_Mplayer__status__type_R
{
public:
	class USimulation_player_component*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Player_player_status_type   __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer__team_Mint_Mint_R
struct FTuple_Lplayer__team_Mint_Mint_R
{
public:
	struct FGame_Player_player_team              __verse_0x18E3F084_Elem0;                          // 0x0(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6875[0x4];                                     // Fixing Size After Last Property
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer__team_Mint_R
struct FTuple_Lplayer__team_Mint_R
{
public:
	struct FGame_Player_player_team              __verse_0x18E3F084_Elem0;                          // 0x0(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6876[0x4];                                     // Fixing Size After Last Property
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer__team_Mplayer__team_R
struct FTuple_Lplayer__team_Mplayer__team_R
{
public:
	struct FGame_Player_player_team              __verse_0x18E3F084_Elem0;                          // 0x0(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FGame_Player_player_team              __verse_0x7D844C3C_Elem1;                          // 0x4(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_M_Kchar_Mint_Mlogic_R
struct FTuple_Lplayer_M_Kchar_Mint_Mlogic_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0xF64C4596_Elem3 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_M_Kchar_Mint_R
struct FTuple_Lplayer_M_Kchar_Mint_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R
struct FTuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_fort_item_definition*            __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0xF64C4596_Elem3 : 1;                      // Mask: 0x1, PropSize: 0x10x18(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mint_Mint_R
struct FTuple_Lplayer_Mint_Mint_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mint_R
struct FTuple_Lplayer_Mint_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mlogic_Mlogic_Mlogic_R
struct FTuple_Lplayer_Mlogic_Mlogic_Mlogic_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x7D844C3C_Elem1 : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_440 : 7;                                    // Fixing Bit-Field Size
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x9(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_441 : 7;                                    // Fixing Bit-Field Size
	uint8                                        __verse_0xF64C4596_Elem3 : 1;                      // Mask: 0x1, PropSize: 0x10xA(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mlogic_R
struct FTuple_Lplayer_Mlogic_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0x7D844C3C_Elem1 : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mplayer__team_R
struct FTuple_Lplayer_Mplayer__team_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGame_Player_player_team              __verse_0x7D844C3C_Elem1;                          // 0x8(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_Mplayer_R
struct FTuple_Lplayer_Mplayer_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimulation_player*                    __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_Mfloat_R
struct FTuple_Lplayer_MPlayerAttribute_Mfloat_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Player_PlayerAttribute      __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6881[0x7];                                     // Fixing Size After Last Property
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R
struct FTuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Player_PlayerAttribute      __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGame_Player_PlayerAttributeOperation __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6885[0x6];                                     // Fixing Size After Last Property
	double                                       __verse_0xF64C4596_Elem3;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_R
struct FTuple_Lplayer_MPlayerAttribute_R
{
public:
	class USimulation_player*                    __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Player_PlayerAttribute      __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseFortniteInternal.tuple_Lvector3_M_Qplayer__component_R
struct FTuple_Lvector3_M_Qplayer__component_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
