#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DeveloperSettings.DeveloperSettings
class UDeveloperSettings : public UObject
{
public:
	uint8                                        Pad_63E[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDeveloperSettings* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class DeveloperSettings.DeveloperSettingsBackedByCVars
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UDeveloperSettingsBackedByCVars* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class DeveloperSettings.PlatformSettings
class UPlatformSettings : public UObject
{
public:
	uint8                                        Pad_650[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlatformSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class DeveloperSettings.PlatformSettingsManager
class UPlatformSettingsManager : public UObject
{
public:
	TMap<TSubclassOf<class UPlatformSettings>, struct FPlatformSettingsInstances> SettingsMap;                                       // 0x28(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_654[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPlatformSettingsManager* GetDefaultObj();

};

}


