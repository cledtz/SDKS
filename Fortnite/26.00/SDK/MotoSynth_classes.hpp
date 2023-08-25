#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x160 - 0x28)
// Class MotoSynth.MotoSynthPreset
class UMotoSynthPreset : public UObject
{
public:
	struct FMotoSynthRuntimeSettings             Settings;                                          // 0x28(0x138)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMotoSynthPreset* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class MotoSynth.MotoSynthSource
class UMotoSynthSource : public UObject
{
public:
	bool                                         bConvertTo8Bit;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0B[0x3];                                     // Fixing Size After Last Property 
	float                                        DownSampleFactor;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RpmCurve;                                          // 0x30(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<float>                                SourceData;                                        // 0xB8(0x10)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<int16>                                SourceDataPCM;                                     // 0xC8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        SourceSampleRate;                                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E10[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FGrainTableEntry>              GrainTable;                                        // 0xE0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E11[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMotoSynthSource* GetDefaultObj();

};

// 0x1A0 (0xAA0 - 0x900)
// Class MotoSynth.SynthComponentMoto
class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                      MotoSynthPreset;                                   // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RPM;                                               // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E18[0x194];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USynthComponentMoto* GetDefaultObj();

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings);
	void SetRPM(float InRPM, float InTimeSec);
	bool IsEnabled();
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM);
};

}


