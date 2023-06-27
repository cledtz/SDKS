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

// 0x0 (0x530 - 0x530)
// BlueprintGeneratedClass AI_skill_phoebe_bot_attacking.AI_skill_phoebe_bot_attacking_C
class UAI_skill_phoebe_bot_attacking_C : public UFortAthenaAIBotAttackingSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_attacking_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
