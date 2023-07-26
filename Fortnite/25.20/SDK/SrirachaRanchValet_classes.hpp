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

// 0x0 (0x4B0 - 0x4B0)
// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Valet");
		return Clss;
	}

	void VehicleExploded(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
