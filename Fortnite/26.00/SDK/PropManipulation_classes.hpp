#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// Class PropManipulation.PropManipulationNativeComponent
class UPropManipulationNativeComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UPropManipulationNativeComponent* GetDefaultObj();

	void SetControlledObjectsVisibilityAndCollision(const TArray<class UBuildingSMActor*>& InObjectsOfControl, bool InNewVisibility);
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
};

}


