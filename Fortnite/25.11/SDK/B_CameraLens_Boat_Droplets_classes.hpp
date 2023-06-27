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

// 0x18 (0x388 - 0x370)
// BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789; // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789; // 0x37C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8575[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_0;                                        // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraLens_Boat_Droplets_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
