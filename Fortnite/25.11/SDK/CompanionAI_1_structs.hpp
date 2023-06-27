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

enum class ECompanionAI_PingCommand_command_type : uint8
{
	go_to                          = 0,
	back_to_me                     = 1,
	back_to_default                = 2,
	hold_position                  = 3,
	revive                         = 4,
	invalid                        = 5,
	CompanionAI_PingCommand_command_MAX = 6,
};

enum class ECompanionAI_PingCommand_entity_type : uint8
{
	pawn                           = 0,
	pickup                         = 1,
	weapon                         = 2,
	container                      = 3,
	player_built_actor             = 4,
	building_actor                 = 5,
	undefined                      = 6,
	CompanionAI_PingCommand_entity_MAX = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// VerseStruct CompanionAI.CompanionAI_ping_info
struct FCompanionAI_ping_info
{
public:
	enum class ECompanionAI_PingCommand_command_type __verse_0x72E298E9_Type;                           // 0x0(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionAI_PingCommand_entity_type __verse_0x6CF7C7E8_EntityType;                     // 0x1(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C57[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0xB0C27E0A_Location;                       // 0x8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        __verse_0x0FA78E7E_LocationOnHorizontalSurface : 1; // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_504 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C58[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x459049A1_Target;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xFD64D7AA_Emitter;                        // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct CompanionAI.tuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R
struct FTuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x20(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xF64C4596_Elem3;                          // 0x30(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct CompanionAI.tuple_L_Kchar_M_Kchar_R
struct FTuple_L_Kchar_M_Kchar_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct CompanionAI.tuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R
struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct CompanionAI.tuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x20(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x12 (0x12 - 0x0)
// VerseStruct CompanionAI.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct CompanionAI.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mfloat_Mfloat_R
struct FTuple_Lagent_Mfloat_Mfloat_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mfloat_R
struct FTuple_Lagent_Mfloat_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R
struct FTuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_Abilities_gameplay_ability_asset* __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xF64C4596_Elem3;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R
struct FTuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_Abilities_gameplay_ability_asset* __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xF64C4596_Elem3;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mgameplay__ability__asset_R
struct FTuple_Lagent_Mgameplay__ability__asset_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGame_Abilities_gameplay_ability_asset* __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R
struct FTuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R
{
public:
	class USimulation_agent*                     __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct CompanionAI.tuple_Lentity_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UVerseEngine_Entity_entity*            __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Lfloat_Mfloat_R
struct FTuple_Lfloat_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Lfort__character_Mfloat_R
struct FTuple_Lfort__character_Mfloat_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct CompanionAI.tuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct CompanionAI.tuple_Lfort__obstacle__info_Mentity_R
struct FTuple_Lfort__obstacle__info_Mentity_R
{
public:
	struct FVerseAIBase_fort_obstacle_info       __verse_0x18E3F084_Elem0;                          // 0x0(0x28)(InstancedReference, NoDestructor)
	class UVerseEngine_Entity_entity*            __verse_0x7D844C3C_Elem1;                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct CompanionAI.tuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
{
public:
	class UGame_Abilities_gameplay_ability_asset* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// VerseStruct CompanionAI.tuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
{
public:
	class UAI_navigation_target*                 __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x18(0x2)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// VerseStruct CompanionAI.tuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R
struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R
{
public:
	class UAI_navigation_target*                 __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x18(0x2)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct CompanionAI.tuple_Lnavigation__target_M_QReachRadius_Nfloat_R
struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_R
{
public:
	class UAI_navigation_target*                 __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R
struct FTuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct CompanionAI.tuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R
struct FTuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_505 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C59[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x38(0x2)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_506 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C5A[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_507 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C5B[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_508 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C5C[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x38(0x2)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_509 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C5D[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R
struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_50A : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8C5E[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x38(0x2)(InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R
struct FTuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x58(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8C5F[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x60(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x28(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x58(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x68(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8C60[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x70(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Magent_Mfloat_R
struct FTuple_Lvector3_Magent_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	class USimulation_agent*                     __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Magent_R
struct FTuple_Lvector3_Mfloat_Magent_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Mcolor_R
struct FTuple_Lvector3_Mfloat_Mcolor_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColors_color                         __verse_0x932BF92E_Elem2;                          // 0x20(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mfloat_Mfloat_R
struct FTuple_Lvector3_Mfloat_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R
struct FTuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R
struct FTuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x932BF92E_Elem2;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct CompanionAI.tuple_Lvector3_Mvector3_R
struct FTuple_Lvector3_Mvector3_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
