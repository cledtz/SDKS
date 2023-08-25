#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{
public:
	enum class EPowerupHeatState                 LastPowerupHeatState;                              // 0x328(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3975[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPowerupReticleExtensionWidget* GetDefaultObj();

	float GetOverheatingMaxValue();
	float GetCurrentOverheatValue();
	float GetCurrentOverheatPercent();
};

}


