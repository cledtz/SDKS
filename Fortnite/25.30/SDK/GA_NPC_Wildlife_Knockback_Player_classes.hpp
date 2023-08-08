#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC51 - 0xC51)
// BlueprintGeneratedClass GA_NPC_Wildlife_Knockback_Player.GA_NPC_Wildlife_Knockback_Player_C
class UGA_NPC_Wildlife_Knockback_Player_C : public UGAB_GenericApplyKnockback_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_NPC_Wildlife_Knockback_Player_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
