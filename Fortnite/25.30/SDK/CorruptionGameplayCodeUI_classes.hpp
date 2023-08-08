#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x328 - 0x320)
// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	enum class EPowerupHeatState                 LastPowerupHeatState;                              // 0x320(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1308[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPowerupReticleExtensionWidget");
		return Clss;
	}

	float GetOverheatingMaxValue();
	float GetCurrentOverheatValue();
	float GetCurrentOverheatPercent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
