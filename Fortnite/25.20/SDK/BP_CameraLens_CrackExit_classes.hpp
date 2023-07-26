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

// 0x8 (0x388 - 0x380)
// BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C
class ABP_CameraLens_CrackExit_C : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*              Portal;                                            // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CameraLens_CrackExit_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
