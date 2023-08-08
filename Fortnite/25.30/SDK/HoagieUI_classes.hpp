#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x480 - 0x478)
// Class HoagieUI.FortHoagieVehicleReticle
class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	class UFortHoagieVehicle*                    OwningHoagieVehicle;                               // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHoagieVehicleReticle");
		return Clss;
	}

	void OnSetupComplete(bool bVehicleUsesFuelSystem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
