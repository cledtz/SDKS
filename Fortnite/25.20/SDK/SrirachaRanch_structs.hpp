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

enum class EStreamingRadioSourceState : uint8
{
	None                           = 0,
	Loading                        = 1,
	LoadingPlayer                  = 2,
	LoadedPlayer                   = 3,
	Playing                        = 4,
	EStreamingRadioSourceState_MAX = 5,
};

enum class EOnlineRadioSourceType : uint8
{
	Epic                           = 0,
	EOnlineRadioSourceType_MAX     = 1,
};

enum class ERadioSource : uint8
{
	Invalid                        = 0,
	Vehicle                        = 1,
	ERadioSource_MAX               = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct SrirachaRanch.AthenaRadioStation
struct FAthenaRadioStation
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                StationImage;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceID;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GameplayTagDenylist;                               // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        GameplayTagAllowlist;                              // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SrirachaRanch.SrirachaPerClassSpecialSeats
struct FSrirachaPerClassSpecialSeats
{
public:
	TArray<int32>                                OutsideSeatIndices;                                // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct SrirachaRanch.StreamingRadioSourceData
struct FStreamingRadioSourceData
{
public:
	enum class EStreamingRadioSourceState        State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CE5[0x3];                                     // Fixing Size After Last Property..
	int32                                        PlayingIndex;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeoutSeconds;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CE6[0x4];                                     // Fixing Size After Last Property..
	struct FAthenaRadioStation                   SourceOverride;                                    // 0x10(0x58)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SrirachaRanch.SrirachaInputMappingData
struct FSrirachaInputMappingData
{
public:
	class FName                                  MainActionName;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GamepadActionName;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
