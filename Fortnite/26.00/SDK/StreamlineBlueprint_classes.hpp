#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryDLSSG
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryDLSSG* GetDefaultObj();

	void SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode);
	enum class EUStreamlineDLSSGSupport QueryDLSSGSupport();
	bool IsDLSSGSupported();
	bool IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode);
	TArray<enum class EUStreamlineDLSSGMode> GetSupportedDLSSGModes();
	enum class EUStreamlineDLSSGMode GetDLSSGMode();
	void GetDLSSGMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor);
	void GetDLSSGFrameTiming(float* FrameRateInHertz, int32* FramesPresented);
	enum class EUStreamlineDLSSGMode GetDefaultDLSSGMode();
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryReflex
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryReflex* GetDefaultObj();

	void SetReflexMode(enum class EUStreamlineReflexMode Mode);
	enum class EUStreamlineReflexSupport QueryReflexSupport();
	bool IsReflexSupported();
	float GetRenderLatencyInMs();
	enum class EUStreamlineReflexMode GetReflexMode();
	float GetGameToRenderLatencyInMs();
	float GetGameLatencyInMs();
	enum class EUStreamlineReflexMode GetDefaultReflexMode();
};

}


