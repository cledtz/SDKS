#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xCE0 - 0xCE0)
// BlueprintGeneratedClass AI_skill_phoebe_bot_perception.AI_skill_phoebe_bot_perception_C
class UAI_skill_phoebe_bot_perception_C : public UFortAthenaAIBotPerceptionSkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_perception_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
