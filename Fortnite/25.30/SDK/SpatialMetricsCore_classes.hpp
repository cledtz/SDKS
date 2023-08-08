#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class SpatialMetricsCore.SpatialMetric
class USpatialMetric : public UObject
{
public:
	struct FSpatialMetricProperties              Properties;                                        // 0x28(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A20[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpatialMetric");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class SpatialMetricsCore.SpatialMetricsSubsystem
class USpatialMetricsSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2A23[0x10];                                    // Fixing Size After Last Property
	TArray<class USpatialMetric*>                Metrics;                                           // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        UpdateRateInSeconds;                               // 0x50(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A24[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpatialMetricsSubsystem");
		return Clss;
	}

};

// 0x78 (0xB8 - 0x40)
// Class SpatialMetricsCore.TestMetric
class UTestMetric : public USpatialMetric
{
public:
	uint8                                        Pad_2A27[0x6C];                                    // Fixing Size After Last Property
	int32                                        SamplingDistance;                                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSamplingFactor;                               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A28[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMetric");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
