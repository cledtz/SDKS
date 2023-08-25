#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseFortniteGameplayAbilities.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseFortniteGameplayAbilities.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_ability_component
// (None)

class UClass* UGame_Abilities_ability_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Abilities_ability_component");

	return Clss;
}


// Game_Abilities_ability_component VerseFortniteGameplayAbilities.Default__Game_Abilities_ability_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Abilities_ability_component* UGame_Abilities_ability_component::GetDefaultObj()
{
	static class UGame_Abilities_ability_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Abilities_ability_component*>(UGame_Abilities_ability_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGame_Abilities_gameplay_ability_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EGame_Abilities_remove_ability_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGame_Abilities_remove_ability_result UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lgameplay__effect__asset_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R(const struct FTuple_Lgameplay__effect__asset_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGame_Abilities_gameplay_ability_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EGame_Abilities_add_ability_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGame_Abilities_add_ability_result UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UConcurrency_task* UGame_Abilities_ability_component::ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R");

	Params::UGame_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitInstance
// (None)
// Parameters:

void UGame_Abilities_ability_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$InitInstance");

	Params::UGame_Abilities_ability_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$Block
// (None)
// Parameters:

void UGame_Abilities_ability_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$Block");

	Params::UGame_Abilities_ability_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitCDO
// (None)
// Parameters:

void UGame_Abilities_ability_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_ability_component", "$InitCDO");

	Params::UGame_Abilities_ability_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent
// (None)

class UClass* UGame_Abilities_AbilityComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Abilities_AbilityComponent");

	return Clss;
}


// Game_Abilities_AbilityComponent VerseFortniteGameplayAbilities.Default__Game_Abilities_AbilityComponent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Abilities_AbilityComponent* UGame_Abilities_AbilityComponent::GetDefaultObj()
{
	static class UGame_Abilities_AbilityComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Abilities_AbilityComponent*>(UGame_Abilities_AbilityComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R");

	Params::UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R(class UObject* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R");

	Params::UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent.$InitCDO
// (None)
// Parameters:

void UGame_Abilities_AbilityComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_AbilityComponent", "$InitCDO");

	Params::UGame_Abilities_AbilityComponent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset
// (None)

class UClass* UGame_Abilities_gameplay_ability_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Abilities_gameplay_ability_asset");

	return Clss;
}


// Game_Abilities_gameplay_ability_asset VerseFortniteGameplayAbilities.Default__Game_Abilities_gameplay_ability_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Abilities_gameplay_ability_asset* UGame_Abilities_gameplay_ability_asset::GetDefaultObj()
{
	static class UGame_Abilities_gameplay_ability_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Abilities_gameplay_ability_asset*>(UGame_Abilities_gameplay_ability_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitInstance
// (None)
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitInstance");

	Params::UGame_Abilities_gameplay_ability_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$Block
// (None)
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$Block");

	Params::UGame_Abilities_gameplay_ability_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitCDO
// (None)
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitCDO");

	Params::UGame_Abilities_gameplay_ability_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset
// (None)

class UClass* UGame_Abilities_gameplay_effect_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Abilities_gameplay_effect_asset");

	return Clss;
}


// Game_Abilities_gameplay_effect_asset VerseFortniteGameplayAbilities.Default__Game_Abilities_gameplay_effect_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Abilities_gameplay_effect_asset* UGame_Abilities_gameplay_effect_asset::GetDefaultObj()
{
	static class UGame_Abilities_gameplay_effect_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Abilities_gameplay_effect_asset*>(UGame_Abilities_gameplay_effect_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitInstance
// (None)
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitInstance");

	Params::UGame_Abilities_gameplay_effect_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$Block
// (None)
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$Block");

	Params::UGame_Abilities_gameplay_effect_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitCDO
// (None)
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitCDO");

	Params::UGame_Abilities_gameplay_effect_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R VerseFortniteGameplayAbilities.Default__task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R* UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R*>(UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


