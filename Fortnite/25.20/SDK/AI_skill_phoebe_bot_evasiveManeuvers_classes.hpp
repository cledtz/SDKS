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

// 0x0 (0x6C8 - 0x6C8)
// BlueprintGeneratedClass AI_skill_phoebe_bot_evasiveManeuvers.AI_skill_phoebe_bot_evasiveManeuvers_C
class UAI_skill_phoebe_bot_evasiveManeuvers_C : public UFortAthenaAIBotEvasiveManeuversSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_evasiveManeuvers_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
