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

// 0x0 (0x948 - 0x948)
// BlueprintGeneratedClass GE_RidingSprint_VehicleDmg.GE_RidingSprint_VehicleDmg_C
class UGE_RidingSprint_VehicleDmg_C : public UGET_DirectPhysicalDamage_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GE_RidingSprint_VehicleDmg_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
