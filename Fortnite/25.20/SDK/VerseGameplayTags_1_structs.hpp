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

enum class ETags_tag_search_sort_type : uint8
{
	Unsorted                       = 0,
	Sorted                         = 1,
	Tags_tag_search_sort_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// VerseStruct VerseGameplayTags.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseGameplayTags.tuple_Ltag__container_Mtag__container_R
struct FTuple_Ltag__container_Mtag__container_R
{
public:
	class UTags_tag_container*                   __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTags_tag_container*                   __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseGameplayTags.tuple_Ltag_Mtag_R
struct FTuple_Ltag_Mtag_R
{
public:
	class UTags_tag*                             __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTags_tag*                             __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
