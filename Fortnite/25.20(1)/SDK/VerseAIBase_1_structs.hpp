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

enum class EVerseAIBase_action_result : uint8
{
	Success                        = 0,
	Canceled                       = 1,
	Disallowed                     = 2,
	VerseAIBase_action_MAX         = 3,
};

enum class EVerseAIBase_fallible_action_result : uint8
{
	Success                        = 0,
	Failure                        = 1,
	Canceled                       = 2,
	Disallowed                     = 3,
	VerseAIBase_fallible_action_MAX = 4,
};

enum class EVerseAIBase_fort_loot_type : uint8
{
	pickup                         = 0,
	chest                          = 1,
	supply_drop                    = 2,
	unknown                        = 3,
	VerseAIBase_fort_loot_MAX      = 4,
};

enum class EVerseAIBase_fort_obstacle_status : uint8
{
	incoming_obstacle              = 0,
	blocked_by_obstacle            = 1,
	trap_obstacle                  = 2,
	VerseAIBase_fort_obstacle_MAX  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// VerseStruct VerseAIBase.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseAIBase.tuple_Lany_M_Kchar_R
struct FTuple_Lany_M_Kchar_R
{
public:
	class UClass*                                __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseAIBase.tuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseAIBase.tuple_Lfort__inventory__item__asset_Mint_R
struct FTuple_Lfort__inventory__item__asset_Mint_R
{
public:
	class UVerseAIBase_fort_inventory_item_asset* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseAIBase.VerseAIBase_fort_item_descriptor
struct FVerseAIBase_fort_item_descriptor
{
public:
	class UVerseAIBase_fort_item_tag*            __verse_0x93BEB694_ItemType;                       // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_8A16[0x10];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseAIBase.tuple_Lfort__item__descriptor_Mfort__item__tag_R
struct FTuple_Lfort__item__descriptor_Mfort__item__tag_R
{
public:
	struct FVerseAIBase_fort_item_descriptor     __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(InstancedReference, NoDestructor)
	class UVerseAIBase_fort_item_tag*            __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseAIBase.tuple_Lgameplay__ability__asset_M_Kchar_R
struct FTuple_Lgameplay__ability__asset_M_Kchar_R
{
public:
	class UClass*                                __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VerseAIBase.VerseAIBase_fort_loot_info
struct FVerseAIBase_fort_loot_info
{
public:
	struct FSpatialMath_vector3                  __verse_0xB0C27E0A_Location;                       // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EVerseAIBase_fort_loot_type       __verse_0x72E298E9_Type;                           // 0x18(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A17[0x7];                                     // Fixing Size After Last Property..
	class UVerseEngine_Entity_entity*            __verse_0xC218B7D2_Loot;                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VerseAIBase.VerseAIBase_fort_obstacle_info
struct FVerseAIBase_fort_obstacle_info
{
public:
	struct FSpatialMath_vector3                  __verse_0xB0C27E0A_Location;                       // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EVerseAIBase_fort_obstacle_status __verse_0xFA60180E_Status;                         // 0x18(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A18[0x7];                                     // Fixing Size After Last Property..
	class UVerseEngine_Entity_entity*            __verse_0x82A44C52_Obstacle;                       // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct VerseAIBase.VerseAIBase_fort_threat_info
struct FVerseAIBase_fort_threat_info
{
public:
	FOptionProperty_                             __verse_0x8B9AF22A_Instigator;                     // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB1B721CE_Source;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0x4A328DE2_LastKnownPosition;              // 0x10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        __verse_0xAC2B8860_HasLineOfSight : 1;             // Mask: 0x1, PropSize: 0x10x28(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_492 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        __verse_0xABBA0802_IsThreatening : 1;              // Mask: 0x1, PropSize: 0x10x29(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A19[0xE];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseAIBase.VerseAIBase_fort_weapon_descriptor
struct FVerseAIBase_fort_weapon_descriptor
{
public:
	int64                                        __verse_0xB3780369_TotalAmmo;                      // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0xAEE6FE8C_LoadedAmmo;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x40EB5EBF_MaxRange;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
