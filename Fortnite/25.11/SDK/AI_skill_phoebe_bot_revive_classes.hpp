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

// 0x0 (0xA8 - 0xA8)
// BlueprintGeneratedClass AI_skill_phoebe_bot_revive.AI_skill_phoebe_bot_revive_C
class UAI_skill_phoebe_bot_revive_C : public UFortAthenaAIBotReviveSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_revive_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
