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
// Class PropManipulation.PropManipulationNativeComponent
class UPropManipulationNativeComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropManipulationNativeComponent");
		return Clss;
	}

	void SetControlledObjectsVisibilityAndCollision(const TArray<class ABuildingSMActor*>& InObjectsOfControl, bool InNewVisibility);
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
