#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x70 - 0x70)
// BlueprintGeneratedClass AI_skill_phoebe_bot_healing.AI_skill_phoebe_bot_healing_C
class UAI_skill_phoebe_bot_healing_C : public UFortAthenaAIBotHealingSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_healing_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
