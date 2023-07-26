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

enum class EEpicMediaScheduleRepeat : uint8
{
	None                           = 0,
	Hourly                         = 1,
	Daily                          = 2,
	EEpicMediaScheduleRepeat_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicMediaSchedule.EpicMediaScheduleScheduleEntryHourly
struct FEpicMediaScheduleScheduleEntryHourly
{
public:
	int32                                        Minutes;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CEB[0x4];                                     // Fixing Size After Last Property..
	class FString                                VUID;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationSeconds;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CEC[0x4];                                     // Fixing Size After Last Property..
	class ULevelSequence*                        Sequence;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicMediaSchedule.EpicMediaScheduleScheduleEntryDaily
struct FEpicMediaScheduleScheduleEntryDaily
{
public:
	int32                                        Hours;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minutes;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VUID;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationSeconds;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CED[0x4];                                     // Fixing Size After Last Property..
	class ULevelSequence*                        Sequence;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EpicMediaSchedule.EpicMediaScheduleScheduleEntryAbsolute
struct FEpicMediaScheduleScheduleEntryAbsolute
{
public:
	class FString                                IsoStartTime;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VUID;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationSeconds;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CEE[0x4];                                     // Fixing Size After Last Property..
	class ULevelSequence*                        Sequence;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicMediaSchedule.EpicMediaScheduleScheduleInfo
struct FEpicMediaScheduleScheduleInfo
{
public:
	struct FDateTime                             StartTime;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             RelativeStartTime;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VUID;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        Sequence;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
