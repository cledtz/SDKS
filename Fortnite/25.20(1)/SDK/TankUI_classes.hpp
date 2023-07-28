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

// 0x0 (0x28 - 0x28)
// Class TankUI.FortGameSettingRegistryExtension_Tank
class UFortGameSettingRegistryExtension_Tank : public UFortGameSettingRegistryExtension
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameSettingRegistryExtension_Tank");
		return Clss;
	}

};

// 0x20 (0x498 - 0x478)
// Class TankUI.TankVehicleReticle
class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	class UFortTankVehicle*                      OwningTankVehicle;                                 // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinTurretPitch;                                    // 0x480(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxTurretPitch;                                    // 0x484(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDistanceMeterEnabled;                             // 0x488(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTankOrientationEventsEnabled;                     // 0x489(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14AB[0xE];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TankVehicleReticle");
		return Clss;
	}

	void SetupVehicleFromBP(class UActor* NewVehicle);
	void OnTreadEnabledChanged(bool bEnabled, enum class ETreadSide Side);
	void OnTankTurretAimYawValueChanged(float Value);
	void OnTankTurretAimPitchValueChanged(float Pitch, float PitchPercent);
	void OnTankTargetingReleased();
	void OnTankTargetingPressed();
	void OnTankRotationValueChanged(float TankValue, float TurretValue);
	void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);
	void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);
	void OnTankDistanceUpdate(float Distance, float DistancePercent);
	void OnCannonFired(float RateTime);
	void HandleOnEquipMountedWeapon(class UFortWeaponRanged* EquippedMountedWeapon);
	void HandleOnDamageablePartHealthChanged(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
