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

// 0x20 (0x48 - 0x28)
// Class OnlineSubsystemMcp.OnlineISOConversionUtil
class UOnlineISOConversionUtil : public UObject
{
public:
	TArray<struct FOnlineISOLanguageInfo>        Languages;                                         // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FOnlineISORegionInfo>          Regions;                                           // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineISOConversionUtil");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
