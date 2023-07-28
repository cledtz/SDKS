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
// BlueprintGeneratedClass GET_DirectVehicleDamage.GET_DirectVehicleDamage_C
class UGET_DirectVehicleDamage_C : public UGet_DirectDamageParent_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GET_DirectVehicleDamage_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
