#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x488 - 0x480)
// Class HoagieUI.FortHoagieVehicleReticle
class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	class UFortHoagieVehicle*                    OwningHoagieVehicle;                               // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHoagieVehicleReticle* GetDefaultObj();

	void OnSetupComplete(bool bVehicleUsesFuelSystem);
};

}


