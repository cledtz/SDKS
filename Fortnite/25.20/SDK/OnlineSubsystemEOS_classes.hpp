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

// 0x0 (0x870 - 0x870)
// Class OnlineSubsystemEOS.NetDriverEOS
class UNetDriverEOS : public UNetDriverEOSBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetDriverEOS");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class OnlineSubsystemEOS.EOSArtifactSettings
class UEOSArtifactSettings : public UDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EOSArtifactSettings");
		return Clss;
	}

};

// 0x68 (0xA0 - 0x38)
// Class OnlineSubsystemEOS.EOSSettings
class UEOSSettings : public URuntimeOptionsBase
{
public:
	class FString                                CacheDir;                                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultArtifactName;                               // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TickBudgetInMilliseconds;                          // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOverlay;                                    // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSocialOverlay;                              // 0x5D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEditorOverlay;                              // 0x5E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldEnforceBeingLaunchedByEGS;                  // 0x5F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TitleStorageTags;                                  // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        TitleStorageReadChunkLength;                       // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86BC[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FArtifactSettings>             Artifacts;                                         // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        AuthScopeFlags;                                    // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bUseEAS;                                           // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEOSConnect;                                    // 0x99(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorStatsToEOS;                                 // 0x9A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorAchievementsToEOS;                          // 0x9B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEOSSessions;                                   // 0x9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorPresenceToEAS;                              // 0x9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86BD[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EOSSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
