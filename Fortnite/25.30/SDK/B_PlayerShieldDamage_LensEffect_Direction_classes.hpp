#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
class UB_PlayerShieldDamage_LensEffect_Direction_C : public UFortEmitterCameraLensEffectDirectional
{
public:
	uint8                                        Pad_387[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerShieldDamage_LensEffect_Direction_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
