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


// Function VariantScript_Backpack_BistroAstronaut_Style.VariantScript_Backpack_BistroAstronaut_Style_C.DetermineVariantSelection
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FFortAthenaLoadout          Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemInLoadout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1     (NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UVariantScript_Backpack_BistroAstronaut_Style_C::DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, bool CallFunc_IsItemInLoadout_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1)
{
	static auto Func = Class->GetFunction("VariantScript_Backpack_BistroAstronaut_Style_C", "DetermineVariantSelection");

	Params::UVariantScript_Backpack_BistroAstronaut_Style_C_DetermineVariantSelection_Params Parms;

	Parms.Loadout = Loadout;
	Parms.CallFunc_IsItemInLoadout_ReturnValue = CallFunc_IsItemInLoadout_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1 = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
