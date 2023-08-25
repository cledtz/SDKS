#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x330 - 0x310)
// Class DistortedWeaponsUI.ChromeWeaponInfoWidget
class UChromeWeaponInfoWidget : public UFortHUDElementWidget
{
public:
	class UFortHUDContext*                       HUDContext;                                        // 0x310(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldMultiItemXPComponent*        CurrentXpComponent;                                // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaItemTierWidget*                 ItemTierWidget;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortKeybindWidget*                    KeybindWidget;                                     // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChromeWeaponInfoWidget* GetDefaultObj();

	void OnWeaponUpgraded();
	void OnWeaponStartUpgrading();
	void OnWeaponRemoved();
	void OnWeaponEquipped();
	void OnReadyToUpgradeWeapon(enum class EFortRarity NextRarity);
	void OnGainedXp(float CurrentXPPercentage);
	void HandleXpChanged(float XPDelta, float CurrentXPPercentage);
	void HandleWeaponUpgraded();
	void HandleWeaponUnEquipped();
	void HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void HandleUpgradeTriggered(float ReloadTime, enum class EFortWeaponReloadType ReloadType);
	void HandlePowerUpPending();
	enum class EFortRarity GetCurrentWeaponRarity();
};

}


