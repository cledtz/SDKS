#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x140 - 0x30)
// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UObject>                WarningToastIcon;                                  // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreativeLowMemoryFallbackUserFacingText DefaultText;                                       // 0x58(0x48)(Edit, Config, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackFreeMemoryThresholds> PlaylistOverrideThresholds;                        // 0xA0(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UFortPlaylist>, struct FCreativeLowMemoryFallbackUserFacingText> PlaylistOverrideText;                              // 0xF0(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeLowMemoryFallbackSettings");
		return Clss;
	}

};

// 0x38 (0x68 - 0x30)
// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{
public:
	struct FCreativeLowMemoryFallbackFreeMemoryThresholds CurrentThresholds;                                 // 0x30(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8074[0x2C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeLowMemoryFallbackWorldSubsystem");
		return Clss;
	}

	void OnPlaylistDataChanged(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
