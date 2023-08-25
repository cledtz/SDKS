#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x398 - 0x380)
// BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
class UB_CameraLens_Boat_Droplets_C : public UEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789; // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FC[0x3];                                     // Fixing Size After Last Property 
	class UTimelineComponent*                    Timeline_0;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_CameraLens_Boat_Droplets_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32 EntryPoint);
};

}


