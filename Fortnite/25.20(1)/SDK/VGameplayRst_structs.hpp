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

// 0x8 (0x8 - 0x0)
// ScriptStruct VGameplayRst.ActiveSoundInfo
struct FActiveSoundInfo
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A7B[0x3];                                     // Fixing Size After Last Property..
	float                                        StartTime;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct VGameplayRst.DatastoreEntry
struct FDatastoreEntry : public FFastArraySerializerItem
{
public:
	class FName                                  KeyName;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValueData;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x128 - 0x108)
// ScriptStruct VGameplayRst.DatastoreState
struct FDatastoreState : public FFastArraySerializer
{
public:
	uint8                                        Pad_7A7C[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FDatastoreEntry>               EntriesArray;                                      // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UDatastoreComponentBase*               OwningComponent;                                   // 0x120(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VGameplayRst.VerseLevelStreamingLevelStatus
struct FVerseLevelStreamingLevelStatus
{
public:
	uint8                                        Pad_7A7D[0x10];                                    // Fixing Size After Last Property..
	class ULevelStreamingDynamic*                Streamer;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerseAssetPtr*                        LevelAsset;                                        // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A7E[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VGameplayRst.VerseLevelStreamingLevelIdentifier
struct FVerseLevelStreamingLevelIdentifier
{
public:
	struct FSoftObjectPath                       LevelPath;                                         // 0x0(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelNameOverride;                                 // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
