#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass VariantScript_Glider_BistroAstronaut_Style.VariantScript_Glider_BistroAstronaut_Style_C
class UVariantScript_Glider_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VariantScript_Glider_BistroAstronaut_Style_C");
		return Clss;
	}

	struct FGameplayTag DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, bool CallFunc_IsItemInLoadout_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
