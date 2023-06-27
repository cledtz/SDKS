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

enum class EDayNightCycleMode : uint8
{
	Default                        = 0,
	FixedTime                      = 1,
	StartAtSpecifiedTime           = 2,
	RandomFixedTime                = 3,
	RandomStartTime                = 4,
	EDayNightCycleMode_MAX         = 5,
};

enum class EDaySequenceModifierBlendMode : uint8
{
	None                           = 0,
	Distance                       = 1,
	EDaySequenceModifierBlendMode_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct DaySequence.DaySequenceModifierNamedSequence
struct FDaySequenceModifierNamedSequence
{
public:
	class UDaySequence*                          Sequence;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BiasOffset;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41CD[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DaySequence.DaySequenceAssetData
struct FDaySequenceAssetData
{
public:
	class UDaySequence*                          Sequence;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bias;                                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMuted;                                            // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41CE[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DaySequence.DaySequenceBindingReference
struct FDaySequenceBindingReference
{
public:
	TSoftObjectPtr<class UObject>                ExternalObjectPath;                                // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ObjectPath;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DaySequence.DaySequenceBindingReferenceArray
struct FDaySequenceBindingReferenceArray
{
public:
	TArray<struct FDaySequenceBindingReference>  References;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct DaySequence.DaySequenceBindingReferences
struct FDaySequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FDaySequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
