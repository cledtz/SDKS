#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VariantScript_Backpack_BistroAstronaut_Style.VariantScript_Backpack_BistroAstronaut_Style_C
// (None)

class UClass* UVariantScript_Backpack_BistroAstronaut_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantScript_Backpack_BistroAstronaut_Style_C");

	return Clss;
}


// VariantScript_Backpack_BistroAstronaut_Style_C VariantScript_Backpack_BistroAstronaut_Style.Default__VariantScript_Backpack_BistroAstronaut_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVariantScript_Backpack_BistroAstronaut_Style_C* UVariantScript_Backpack_BistroAstronaut_Style_C::GetDefaultObj()
{
	static class UVariantScript_Backpack_BistroAstronaut_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantScript_Backpack_BistroAstronaut_Style_C*>(UVariantScript_Backpack_BistroAstronaut_Style_C::StaticClass()->DefaultObject);

	return Default;
}


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantScript_Backpack_BistroAstronaut_Style_C", "DetermineVariantSelection");

	Params::UVariantScript_Backpack_BistroAstronaut_Style_C_DetermineVariantSelection_Params Parms{};

	Parms.Loadout = Loadout;
	Parms.CallFunc_IsItemInLoadout_ReturnValue = CallFunc_IsItemInLoadout_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue;
	Parms.CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1 = CallFunc_GetActiveVariantForSoftItemAndChannel_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


