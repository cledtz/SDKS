#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_215F[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpatialMetric* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class SpatialMetricsCore.SpatialMetricsSubsystem
class USpatialMetricsSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2163[0x10];                                    // Fixing Size After Last Property 
	TArray<class USpatialMetric*>                Metrics;                                           // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        UpdateRateInSeconds;                               // 0x50(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2164[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpatialMetricsSubsystem* GetDefaultObj();

};

// 0x78 (0xB8 - 0x40)
// Class SpatialMetricsCore.TestMetric
class UTestMetric : public USpatialMetric
{
public:
	uint8                                        Pad_2169[0x6C];                                    // Fixing Size After Last Property 
	int32                                        SamplingDistance;                                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldSamplingFactor;                               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTestMetric* GetDefaultObj();

};

}


