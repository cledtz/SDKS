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

// 0x0 (0x2E8 - 0x2E8)
// BlueprintGeneratedClass TacticalSprintEnergyComponent.TacticalSprintEnergyComponent_C
class UTacticalSprintEnergyComponent_C : public UFortComponent_Energy
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TacticalSprintEnergyComponent_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
