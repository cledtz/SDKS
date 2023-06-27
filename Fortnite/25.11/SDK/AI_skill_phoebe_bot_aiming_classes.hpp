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

// 0x0 (0x1520 - 0x1520)
// BlueprintGeneratedClass AI_skill_phoebe_bot_aiming.AI_skill_phoebe_bot_aiming_C
class UAI_skill_phoebe_bot_aiming_C : public UFortAthenaAIBotAimingSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_aiming_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
