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

// 0x70 (0x70 - 0x0)
// VerseStruct VerseFortniteUI.tuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> __verse_0x932BF92E_Elem2;                          // 0x20(0x50)(InstancedReference, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// VerseStruct VerseFortniteUI.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseFortniteUI.tuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R
{
public:
	class UObject*                               __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseFortniteUI.tuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R
struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R
{
public:
	class UUI_player_ui*                         __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_8C71[0x7];                                     // Fixing Size After Last Property..
	TArray<class UUI_hud_element_identifier*>    __verse_0x932BF92E_Elem2;                          // 0x10(0x10)(InstancedReference, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
