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


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGame_Abilities_gameplay_ability_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EGame_Abilities_remove_ability_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGame_Abilities_remove_ability_result UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lgameplay__effect__asset_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R(const struct FTuple_Lgameplay__effect__asset_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGame_Abilities_gameplay_ability_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EGame_Abilities_add_ability_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGame_Abilities_add_ability_result UGame_Abilities_ability_component::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R");

	Params::UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
// FOptionProperty_                   _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UConcurrency_task* UGame_Abilities_ability_component::ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2)
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R");

	Params::UGame_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitInstance
// ()
// Parameters:

void UGame_Abilities_ability_component::_InitInstance()
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "$InitInstance");

	Params::UGame_Abilities_ability_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$Block
// ()
// Parameters:

void UGame_Abilities_ability_component::_Block()
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "$Block");

	Params::UGame_Abilities_ability_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitCDO
// ()
// Parameters:

void UGame_Abilities_ability_component::_InitCDO()
{
	static auto Func = Class->GetFunction("Game_Abilities_ability_component", "$InitCDO");

	Params::UGame_Abilities_ability_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R");

	Params::UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ UGame_Abilities_AbilityComponent::_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R(class UObject* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Game_Abilities_AbilityComponent", "_L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R");

	Params::UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent.$InitCDO
// ()
// Parameters:

void UGame_Abilities_AbilityComponent::_InitCDO()
{
	static auto Func = Class->GetFunction("Game_Abilities_AbilityComponent", "$InitCDO");

	Params::UGame_Abilities_AbilityComponent__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitInstance
// ()
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_InitInstance()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitInstance");

	Params::UGame_Abilities_gameplay_ability_asset__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$Block
// ()
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_Block()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$Block");

	Params::UGame_Abilities_gameplay_ability_asset__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitCDO
// ()
// Parameters:

void UGame_Abilities_gameplay_ability_asset::_InitCDO()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_ability_asset", "$InitCDO");

	Params::UGame_Abilities_gameplay_ability_asset__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitInstance
// ()
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_InitInstance()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitInstance");

	Params::UGame_Abilities_gameplay_effect_asset__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$Block
// ()
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_Block()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$Block");

	Params::UGame_Abilities_gameplay_effect_asset__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitCDO
// ()
// Parameters:

void UGame_Abilities_gameplay_effect_asset::_InitCDO()
{
	static auto Func = Class->GetFunction("Game_Abilities_gameplay_effect_asset", "$InitCDO");

	Params::UGame_Abilities_gameplay_effect_asset__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R::Update()
{
	static auto Func = Class->GetFunction("task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
