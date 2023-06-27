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

enum class ECreativeVideoPlayerFullscreenEffects : uint8
{
	None                           = 0,
	NoCollisionOnly                = 1,
	NoDamageOnly                   = 2,
	NoCollisionAndNoDamage         = 3,
	ECreativeVideoPlayerFullscreenEffects_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
struct FCreativeVideoPlayerFullscreenOptions
{
public:
	enum class ECreativeVideoPlayerFullscreenEffects GameplayEffects;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromptFirst;                                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
