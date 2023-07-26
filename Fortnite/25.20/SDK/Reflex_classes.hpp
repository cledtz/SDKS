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
// Class Reflex.ReflexBlueprintLibrary
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReflexBlueprintLibrary");
		return Clss;
	}

	void SetReflexMode(enum class EReflexMode Mode);
	void SetFlashIndicatorEnabled(bool bEnabled);
	float GetRenderLatencyInMs();
	enum class EReflexMode GetReflexMode();
	bool GetReflexAvailable();
	float GetGameToRenderLatencyInMs();
	float GetGameLatencyInMs();
	bool GetFlashIndicatorEnabled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
