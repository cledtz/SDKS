#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x150 - 0x30)
// Class ActorMetrics.ActorMetricsSettings
class UActorMetricsSettings : public UDeveloperSettings
{
public:
	TArray<class FName>                          ExcludedPaths;                                     // 0x30(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2A05[0x50];                                    // Fixing Size After Last Property
	TArray<class FName>                          ExcludedPackages;                                  // 0x90(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2A06[0x50];                                    // Fixing Size After Last Property
	TArray<class UClass*>                        ClassIgnoreList;                                   // 0xF0(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSet<class UClass*>                          ClassIgnoreListSet;                                // 0x100(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorMetricsSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
