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

// 0x0 (0x370 - 0x370)
// BlueprintGeneratedClass BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Hook_Camera_LensEffect_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
