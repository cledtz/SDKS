#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteGameplayAbilities.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0xA8 (0x138 - 0x90)
// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_ability_component
class UGame_Abilities_ability_component : public UVerseFortniteAbilityComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x7E185236__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2646F532__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1A22FD7D_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x033DB290__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_193C[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_Abilities_ability_component* GetDefaultObj();

	enum class EGame_Abilities_remove_ability_result _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R(const struct FTuple_Lgameplay__effect__asset_Mfloat_R& __verse_0xB2CDDD72_Argument);
	enum class EGame_Abilities_add_ability_result _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R(class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent
class UGame_Abilities_AbilityComponent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Abilities_AbilityComponent* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R(class UObject* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset
class UGame_Abilities_gameplay_ability_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UGame_Abilities_gameplay_ability_asset* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset
class UGame_Abilities_gameplay_effect_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UGame_Abilities_gameplay_effect_asset* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x21 (0x161 - 0x140)
// VerseClass VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
class UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UGame_Abilities_ability_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x148(0x18)(Parm, HasGetValueTypeHash)
	enum class EGame_Abilities_activate_ability_result _RetVal;                                           // 0x160(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R* GetDefaultObj();

	int64 Update();
};

}


