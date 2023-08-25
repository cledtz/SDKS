#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1FE0 - 0x1FD0)
// Class DirtbikeRuntime.FortDirtbikeVehicle
class UFortDirtbikeVehicle : public UFortMotorcycleVehicle
{
public:
	uint8                                        Pad_3B51[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortDirtbikeVehicle* GetDefaultObj();

};

// 0x0 (0xB80 - 0xB80)
// Class DirtbikeRuntime.FortDirtbikeVehicleConfigs
class UFortDirtbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs
{
public:

	static class UClass* StaticClass();
	static class UFortDirtbikeVehicleConfigs* GetDefaultObj();

};

}


