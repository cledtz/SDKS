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

// 0x0 (0x948 - 0x948)
// BlueprintGeneratedClass GE_NPC_Parent_DirectDamage.GE_NPC_Parent_DirectDamage_C
class UGE_NPC_Parent_DirectDamage_C : public UGET_DirectCreatureDamage_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GE_NPC_Parent_DirectDamage_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
