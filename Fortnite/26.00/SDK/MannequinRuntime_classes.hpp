#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UMannequinAnalyticsComponent* GetDefaultObj();

	void FireMannequinAnalytics_Interact(class UFortPlayerController* Controller, enum class ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling);
};

}


