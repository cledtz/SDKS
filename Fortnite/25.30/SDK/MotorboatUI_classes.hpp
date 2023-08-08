#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x478 - 0x478)
// Class MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball
class UFortAthenaVehicleDashboardWidget_Meatball : public UFortAthenaVehicleDashboardWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaVehicleDashboardWidget_Meatball");
		return Clss;
	}

	class UFortMeatballVehicle* GetMeatballVehicle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
