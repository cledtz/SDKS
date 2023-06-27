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

// 0x110 (0x158 - 0x48)
// Class AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton
class UFortChargingSet_AloeCrouton : public UFortChargingSet_Base
{
public:
	struct FFortGameplayAttributeData            Charge;                                            // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            MaxCharge;                                         // 0x70(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            ChargeRate;                                        // 0x98(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            ChargeIncrementAmount;                             // 0xC0(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            ChargeRegenThreshold;                              // 0xE8(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	struct FFortGameplayAttributeData            ServerTimeChargeIncrements;                        // 0x110(0x28)(BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AF4[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortChargingSet_AloeCrouton");
		return Clss;
	}

	void OnRep_Charge(struct FFortGameplayAttributeData& OldValue);
	float GetCooldownRemaining();
	float GetCooldownDuration();
};

// 0x0 (0x88 - 0x88)
// Class AloeCroutonWeaponRuntime.FortCosmeticStatObject_AloeCroutonCharge
class UFortCosmeticStatObject_AloeCroutonCharge : public UFortCosmeticStatObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCosmeticStatObject_AloeCroutonCharge");
		return Clss;
	}

	void HandleChargeCountChanged(float OldChargeCount, float NewChargeCount, class AFortPlayerController* PlayerController);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
