#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class OnlineSubsystemMcp.OnlineISOConversionUtil
class UOnlineISOConversionUtil : public UObject
{
public:
	TArray<struct FOnlineISOLanguageInfo>        Languages;                                         // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FOnlineISORegionInfo>          Regions;                                           // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineISOConversionUtil* GetDefaultObj();

};

}


