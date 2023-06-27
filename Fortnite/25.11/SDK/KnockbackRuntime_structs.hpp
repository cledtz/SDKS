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

// 0x14 (0x20 - 0xC)
// ScriptStruct KnockbackRuntime.KnockbackMutatorData
struct FKnockbackMutatorData : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_82A0[0x4];                                     // Fixing Size After Last Property..
	class APawn*                                 Pawn;                                              // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KnockbackMultiplier;                               // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82A1[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct KnockbackRuntime.KnockbackMutatorDataArray
struct FKnockbackMutatorDataArray : public FFastArraySerializer
{
public:
	TArray<struct FKnockbackMutatorData>         Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_82A2[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
