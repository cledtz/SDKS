#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVerseWorldPartition_data_layer_runtime_state : uint8
{
	Unloaded                       = 0,
	Loaded                         = 1,
	Activated                      = 2,
	VerseWorldPartition_data_layer_runtime_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// VerseStruct VerseWorldPartition.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// VerseStruct VerseWorldPartition.tuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R
struct FTuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R
{
public:
	class UVerseWorldPartition_data_layer_asset* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseWorldPartition_data_layer_runtime_state __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x932BF92E_Elem2 : 1;                      // Mask: 0x1, PropSize: 0x10x9(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}


