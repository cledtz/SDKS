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
// BlueprintGeneratedClass GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C
class UGE_Resist_Damage_AoE_C : public UGameplayEffect
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GE_Resist_Damage_AoE_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif