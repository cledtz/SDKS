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

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass BP_CameraLens_IceFrost.BP_CameraLens_IceFrost_C
class ABP_CameraLens_IceFrost_C : public AEmitterCameraLensEffectBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CameraLens_IceFrost_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
