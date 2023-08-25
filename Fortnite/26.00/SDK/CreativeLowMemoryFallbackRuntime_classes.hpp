#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x138 - 0x30)
// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UObject>                WarningToastIcon;                                  // 0x30(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreativeLowMemoryFallbackUserFacingText DefaultText;                                       // 0x50(0x48)(Edit, Config, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackFreeMemoryThresholds> PlaylistOverrideThresholds;                        // 0x98(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackUserFacingText> PlaylistOverrideText;                              // 0xE8(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCreativeLowMemoryFallbackSettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{
public:
	struct FCreativeLowMemoryFallbackFreeMemoryThresholds CurrentThresholds;                                 // 0x30(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF0[0x2C];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeLowMemoryFallbackWorldSubsystem* GetDefaultObj();

	void OnPlaylistDataChanged(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

}


