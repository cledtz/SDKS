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
// Class DLSSBlueprint.DLSSLibrary
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DLSSLibrary");
		return Clss;
	}

	void SetDLSSSharpness(float Sharpness);
	void SetDLSSMode(class UObject* WorldContextObject, enum class EUDLSSMode DLSSMode);
	enum class EUDLSSSupport QueryDLSSSupport();
	bool IsDLSSSupported();
	bool IsDLSSModeSupported(enum class EUDLSSMode DLSSMode);
	bool IsDLSSEnabled();
	bool IsDLAAEnabled();
	TArray<enum class EUDLSSMode> GetSupportedDLSSModes();
	float GetDLSSSharpness();
	void GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	void GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
	enum class EUDLSSMode GetDLSSMode();
	void GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor);
	enum class EUDLSSMode GetDefaultDLSSMode();
	void EnableDLSS(bool bEnabled);
	void EnableDLAA(bool bEnabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
