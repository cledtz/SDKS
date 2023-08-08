#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x398 - 0x380)
// BlueprintGeneratedClass B_CameraLens_Geyser.B_CameraLens_Geyser_C
class UB_CameraLens_Geyser_C : public UEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_Alpha_3D5AA2144E9B8D6D3B409B845315B143; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_3D5AA2144E9B8D6D3B409B845315B143; // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EAD[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    Timeline_0;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraLens_Geyser_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_CameraLens_Geyser(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
