#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2A0 - 0x2A0)
// BlueprintGeneratedClass AI_skill_phoebe_bot_looting.AI_skill_phoebe_bot_looting_C
class UAI_skill_phoebe_bot_looting_C : public UFortAthenaAIBotLootingSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_looting_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
