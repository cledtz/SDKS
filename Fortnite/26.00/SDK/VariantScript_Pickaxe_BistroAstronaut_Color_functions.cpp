#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
// (None)

class UClass* UVariantScript_Pickaxe_BistroAstronaut_Color_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantScript_Pickaxe_BistroAstronaut_Color_C");

	return Clss;
}


// VariantScript_Pickaxe_BistroAstronaut_Color_C VariantScript_Pickaxe_BistroAstronaut_Color.Default__VariantScript_Pickaxe_BistroAstronaut_Color_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVariantScript_Pickaxe_BistroAstronaut_Color_C* UVariantScript_Pickaxe_BistroAstronaut_Color_C::GetDefaultObj()
{
	static class UVariantScript_Pickaxe_BistroAstronaut_Color_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantScript_Pickaxe_BistroAstronaut_Color_C*>(UVariantScript_Pickaxe_BistroAstronaut_Color_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C.DetermineVariantSelection
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FFortAthenaLoadout          Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1     (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemInLoadout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag UVariantScript_Pickaxe_BistroAstronaut_Color_C::DetermineVariantSelection(struct FFortAthenaLoadout& Loadout, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsItemInLoadout_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantScript_Pickaxe_BistroAstronaut_Color_C", "DetermineVariantSelection");

	Params::UVariantScript_Pickaxe_BistroAstronaut_Color_C_DetermineVariantSelection_Params Parms{};

	Parms.Loadout = Loadout;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1 = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_IsItemInLoadout_ReturnValue = CallFunc_IsItemInLoadout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


