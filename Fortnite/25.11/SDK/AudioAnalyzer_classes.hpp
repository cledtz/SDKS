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

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerAssetBase
class UAudioAnalyzerAssetBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzerAssetBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerSettings
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzerSettings");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class AudioAnalyzer.AudioAnalyzer
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E0[0x8];                                     // Fixing Size After Last Property..
	class UAudioAnalyzerSubsystem*               AudioAnalyzerSubsystem;                            // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26E1[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzer");
		return Clss;
	}

	void StopAnalyzing(class UObject* WorldContextObject);
	void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRTSettings
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzerNRTSettings");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRT
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                            Sound;                                             // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationInSeconds;                                 // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E2[0x44];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzerNRT");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class AudioAnalyzer.AudioAnalyzerSubsystem
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                AudioAnalyzers;                                    // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26E3[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioAnalyzerSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
