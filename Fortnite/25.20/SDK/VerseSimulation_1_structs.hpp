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

// 0x1 (0x1 - 0x0)
// VerseStruct VerseSimulation.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseSimulation.tuple_Lint_Many_R
struct FTuple_Lint_Many_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseSimulation.tuple_Lplayer__component_Many_R
struct FTuple_Lplayer__component_Many_R
{
public:
	class USimulation_player_component*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
