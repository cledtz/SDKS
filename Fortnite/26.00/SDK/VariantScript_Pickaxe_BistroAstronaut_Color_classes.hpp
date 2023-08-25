#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
class UVariantScript_Pickaxe_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript
{
public:

	static class UClass* StaticClass();
	static class UVariantScript_Pickaxe_BistroAstronaut_Color_C* GetDefaultObj();

	struct FGameplayTag DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsItemInLoadout_ReturnValue);
};

}


