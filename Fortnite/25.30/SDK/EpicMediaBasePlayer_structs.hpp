#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBaseMediaTerminalErrorReason : uint8
{
	Unknown                        = 0,
	Source                         = 1,
	Player                         = 2,
	UCP                            = 3,
	OpenTimeout                    = 4,
	EBaseMediaTerminalErrorReason_MAX = 5,
};

enum class EBaseMediaDelayAction : uint8
{
	Open                           = 0,
	Stop                           = 1,
	Start                          = 2,
	EBaseMediaDelayAction_MAX      = 3,
};

enum class EBaseMediaPlayerState : uint8
{
	None                           = 0,
	Released                       = 1,
	Stopped                        = 2,
	Started                        = 3,
	Opened                         = 4,
	Error                          = 5,
	EBaseMediaPlayerState_MAX      = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct EpicMediaBasePlayer.BaseMediaDelayConfig
struct FBaseMediaDelayConfig
{
public:
	uint8                                        Pad_2928[0x48];                                    // Fixing Size After Last Property
	class UMediaTexture*                         MediaTexture;                                      // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
