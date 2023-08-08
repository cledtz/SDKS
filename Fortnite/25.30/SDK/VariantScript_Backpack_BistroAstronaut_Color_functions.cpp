#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C.DetermineVariantSelection
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FFortAthenaLoadout          Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1     (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemInLoadout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UVariantScript_Backpack_BistroAstronaut_Color_C::DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsItemInLoadout_ReturnValue)
{
	static auto Func = Class->GetFunction("VariantScript_Backpack_BistroAstronaut_Color_C", "DetermineVariantSelection");

	Params::UVariantScript_Backpack_BistroAstronaut_Color_C_DetermineVariantSelection_Params Parms;

	Parms.Loadout = Loadout;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1 = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_IsItemInLoadout_ReturnValue = CallFunc_IsItemInLoadout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
