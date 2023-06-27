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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C
class UVariantScript_Backpack_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VariantScript_Backpack_BistroAstronaut_Color_C");
		return Clss;
	}

	struct FGameplayTag DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsItemInLoadout_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
