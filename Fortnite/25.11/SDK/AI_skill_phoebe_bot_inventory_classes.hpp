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

// 0x0 (0x2B0 - 0x2B0)
// BlueprintGeneratedClass AI_skill_phoebe_bot_inventory.AI_skill_phoebe_bot_inventory_C
class UAI_skill_phoebe_bot_inventory_C : public UFortAthenaAIBotInventorySkillSet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AI_skill_phoebe_bot_inventory_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
