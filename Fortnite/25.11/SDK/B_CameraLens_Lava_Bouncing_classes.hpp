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

// 0x10 (0x380 - 0x370)
// BlueprintGeneratedClass B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
class AB_CameraLens_Lava_Bouncing_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Camera_Lava_Bouncing;                            // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_CameraLens_Lava_Bouncing_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
