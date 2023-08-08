#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECreativeAudioPlayerTargetListener : uint8
{
	None                           = 0,
	Instigator                     = 1,
	RegisteredPlayers              = 2,
	NonRegisteredPlayers           = 4,
	Everyone                       = 6,
	ECreativeAudioPlayerTargetListener_MAX = 7,
};

enum class ECreativeAudioPlayerTargetLocation : uint8
{
	None                           = 0,
	Device                         = 1,
	LocalPlayer                    = 2,
	RegisteredPlayers              = 4,
	InstigatingPlayer              = 8,
	All                            = 15,
	ECreativeAudioPlayerTargetLocation_MAX = 16,
};

enum class EAutoplayOptions : uint8
{
	None                           = 0,
	Create                         = 1,
	WaitingForPlayer               = 2,
	Countdown                      = 4,
	Gameplay                       = 8,
	RoundEnd                       = 16,
	GameEnd                        = 32,
	EAutoplayOptions_MAX           = 33,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct CRD_AudioPlayerRuntime.CreativeAudioPlayerData
struct FCreativeAudioPlayerData
{
public:
	struct FUniqueNetIdRepl                      NetId;                                             // 0x0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 Pawn;                                              // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerAudioStartTime;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCF[0x4];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
