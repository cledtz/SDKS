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

enum class EThrowingToyItemRemovedReason : uint8
{
	None                           = 0,
	ManuallyDropped                = 1,
	DeviceForcedDropped            = 2,
	DeviceForcedDeleted            = 3,
	EThrowingToyItemRemovedReason_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x28 - 0xC)
// ScriptStruct ThrowingToyRuntime.ThrowingToyData
struct FThrowingToyData : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_80CF[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                ThrowingToy;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 WorldItemGuid;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct ThrowingToyRuntime.ThrowingToyDataArray
struct FThrowingToyDataArray : public FFastArraySerializer
{
public:
	TArray<struct FThrowingToyData>              Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
