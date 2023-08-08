#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB58 - 0xB58)
// BlueprintGeneratedClass GA_BoostJumpPack_Jump.GA_BoostJumpPack_Jump_C
class UGA_BoostJumpPack_Jump_C : public UFortGameplayAbility_Jump
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_Jump_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
