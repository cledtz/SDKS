#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x468 - 0x468)
// BlueprintGeneratedClass AI_skill_phoebe_bot_unstuck.AI_skill_phoebe_bot_unstuck_C
class UAI_skill_phoebe_bot_unstuck_C : public UFortAthenaAIBotUnstuckSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_unstuck_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
