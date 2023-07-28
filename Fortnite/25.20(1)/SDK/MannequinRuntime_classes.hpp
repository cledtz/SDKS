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

// 0x0 (0xA0 - 0xA0)
// Class MannequinRuntime.MannequinAnalyticsComponent
class UMannequinAnalyticsComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MannequinAnalyticsComponent");
		return Clss;
	}

	void FireMannequinAnalytics_Interact(class UFortPlayerController* Controller, enum class ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
