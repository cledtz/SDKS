#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAmbientAudioEntryActionType : uint8
{
	Added                          = 0,
	Updated                        = 1,
	Removed                        = 2,
	Count                          = 3,
	EAmbientAudioEntryActionType_MAX = 4,
};

enum class EAmbientAudioTagActionType : uint8
{
	Added                          = 0,
	Removed                        = 1,
	Count                          = 2,
	EAmbientAudioTagActionType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct AmbientAudio.AmbientAudioBase
struct FAmbientAudioBase
{
public:
	TSoftObjectPtr<class USoundBase>             Sound;                                             // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     Requirements;                                      // 0x20(0x48)(NativeAccessSpecifierPublic)
	struct FAudioGameplayRequirements            PlaybackRequirements;                              // 0x68(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct AmbientAudio.AmbientAudioLoop
struct FAmbientAudioLoop : public FAmbientAudioBase
{
public:
};

// 0x20 (0xD8 - 0xB8)
// ScriptStruct AmbientAudio.AmbientAudioOneShot
struct FAmbientAudioOneShot : public FAmbientAudioBase
{
public:
	struct FVector2D                             RetriggerTimeRange;                                // 0xB8(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TriggerDistanceRange;                              // 0xC8(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


