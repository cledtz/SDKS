#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x150 - 0x30)
// Class AssetDependencies.ActorMetricsSettings
class UActorMetricsSettings : public UDeveloperSettings
{
public:
	TArray<class FName>                          ExcludedPaths;                                     // 0x30(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_213D[0x50];                                    // Fixing Size After Last Property 
	TArray<class FName>                          ExcludedPackages;                                  // 0x90(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2140[0x50];                                    // Fixing Size After Last Property 
	TArray<class UClass*>                        ClassIgnoreList;                                   // 0xF0(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSet<class UClass*>                          ClassIgnoreListSet;                                // 0x100(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActorMetricsSettings* GetDefaultObj();

};

}


