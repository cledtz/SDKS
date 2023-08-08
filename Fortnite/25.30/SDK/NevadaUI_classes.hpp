#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x520 - 0x478)
// Class NevadaUI.FortNevadaVehicleReticle
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	TSubclassOf<class UNevadaTargetIndicator>    NevadaTargetIndicatorClass;                        // 0x478(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNevadaTargetIndicator*                TargetIndicator;                                   // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNevadaVehicle*                    OwningNevadaVehicle;                               // 0x488(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C39[0x8];                                     // Fixing Size After Last Property
	struct FUserWidgetPool                       IndicatorPool;                                     // 0x498(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortNevadaVehicleReticle");
		return Clss;
	}

	void OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState);
	void OnTractorBeamEnabledChanged(bool bEnabled);
	void OnTractorBeamDetached();
	void OnTractorBeamDeactivated(float Cooldown);
	void OnTractorBeamChargeStarted();
	void OnTractorBeamAttached();
	void OnTractorBeamActivated();
	void OnEnergyCanonFired(float Cooldown);
	void OnEnergyCannonEnabledChanged(bool bEnabled);
	void OnBatteryChanged(float BatteryLevel);
};

// 0x0 (0x3B8 - 0x3B8)
// Class NevadaUI.NevadaTargetIndicator
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NevadaTargetIndicator");
		return Clss;
	}

	void OnTractorBeamAttached(bool bAttached);
	void OnTractorBeamActivated(bool bActivated);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
