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

// 0x0 (0x220 - 0x220)
// BlueprintGeneratedClass AI_skill_phoebe_bot_building.AI_skill_phoebe_bot_building_C
class UAI_skill_phoebe_bot_building_C : public UFortAthenaAIBotBuildingSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_building_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
