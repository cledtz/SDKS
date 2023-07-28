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

// 0xC0 (0xF0 - 0x30)
// Class ActorMetrics.ActorMetricsFilterSettings
class UActorMetricsFilterSettings : public UDeveloperSettings
{
public:
	TArray<class FName>                          StaticSharedPackages;                              // 0x30(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43AB[0x50];                                    // Fixing Size After Last Property..
	TArray<class UClass*>                        ClassIgnoreList;                                   // 0x90(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSet<class UClass*>                          ClassIgnoreListSet;                                // 0xA0(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorMetricsFilterSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
