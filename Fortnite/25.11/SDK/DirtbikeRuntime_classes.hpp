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

// 0x10 (0x1FA0 - 0x1F90)
// Class DirtbikeRuntime.FortDirtbikeVehicle
class AFortDirtbikeVehicle : public AFortMotorcycleVehicle
{
public:
	uint8                                        Pad_7F74[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirtbikeVehicle");
		return Clss;
	}

};

// 0x0 (0xB78 - 0xB78)
// Class DirtbikeRuntime.FortDirtbikeVehicleConfigs
class UFortDirtbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDirtbikeVehicleConfigs");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
